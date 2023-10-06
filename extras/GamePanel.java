package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;
import java.util.random.*;

public class GamePanel extends JPanel implements ActionListener {
    static final int Screen_width = 550;
    static final int Screen_height = 550;
    static final int Unit_size = 20;
    static final int Game_units = (Screen_width * Screen_width)/Unit_size;
    static final int delay = 85;

    final int x[] = new int[Game_units];
    final int y[] = new int[Game_units];

    int bodyParts = 3;
    int foodEaten =0;
    int foodX;
    int foodY;
    char direction = 'R';
    boolean running = false;
    Timer timer;
    Random random;
    JButton resetButton;
    GamePanel game;
    GamePanel() {
        random = new Random();
        this.setPreferredSize(new Dimension(Screen_width,Screen_height));
        this.setBackground(Color.BLACK);
        this.setFocusable(true);
        this.addKeyListener(new MyKeyAdapter());
        startGame();
    }
    public void startGame(){
        newFood();
        running = true;
        timer = new Timer(delay,this);
        timer.start();
    }
    public void paintComponent(Graphics g){
        super.paintComponent(g);
        draw(g);
    }
    public void draw(Graphics g){
        if(running)
        {
//            for (int i = 0; i < Screen_width / Unit_size; i++) {
//                g.drawLine(i * Unit_size, 0, i * Unit_size, Screen_width);
//                g.drawLine(0, i * Unit_size, Screen_height, i * Unit_size);
//            }
            g.setColor(Color.yellow);
            g.fillOval(foodX, foodY, Unit_size, Unit_size);


            for(int i = 0; i< bodyParts;i++) {
                if(i == 0) {
                    g.setColor(Color.green);
                    g.fillRect(x[i], y[i], Unit_size,Unit_size);
                }
                else {
                    g.setColor(new Color(45,180,0));
                    g.setColor(new Color(random.nextInt(255),random.nextInt(255),random.nextInt(255)));
                    g.fillRect(x[i], y[i], Unit_size,Unit_size);
                }
            }
            g.setColor(Color.red);
            g.setFont(new Font("Times New Roman",Font.BOLD,30));
            FontMetrics metrics = getFontMetrics(g.getFont());
            g.drawString("Score: "+foodEaten,(Screen_width-metrics.stringWidth("Score: "+foodEaten))/2,g.getFont().getSize() );
        }

        else {
            gameOver(g);
        }
    }


    public void move(){
        for(int i = bodyParts; i>0; i--) {
            x[i] = x[i-1];
            y[i] = y[i-1];
        }
        switch (direction){
            case'U':
                y[0] -= Unit_size;
                break;
            case 'D' :
                y[0] +=Unit_size;
                break;
            case 'L' :
                x[0]-=Unit_size;
                break;
            case 'R' :
                x[0] +=Unit_size;
                break;
        }
    }
    public void newFood() {
        foodX = random.nextInt((int)Screen_width/Unit_size)*Unit_size;
        foodY = random.nextInt((int)Screen_height/Unit_size)*Unit_size;
    }

    public void checkFood(){
        if((x[0]==foodX) && y[0]==foodY) {
            bodyParts++;
            foodEaten++;
            newFood();
        }

    }
    public void checkCollisions() {
        //if head collides with body
        for(int i = bodyParts; i>0; i--) {
            if((x[0]==x[i]) && (y[0] == y[i]))
                running = false;
        }

        //if head touches the wall
        if((x[0]<0) || (x[0] > Screen_width) || y[0]<0 || y[0]>Screen_height) {
            running = false;
        }
        if(!running){
            timer.stop();
        }


    }
    public void gameOver(Graphics g) {
        g.setColor(Color.red);
        g.setFont(new Font("Arial Unicode MS", Font.BOLD, 40));
        FontMetrics metrics = getFontMetrics(g.getFont());

        // First line: "Game Over"
        String gameOverStr = "\uD83D\uDE25 Game Over \uD83D\uDE25";
        int gameOverX = (Screen_width - metrics.stringWidth(gameOverStr)) / 2;
        int gameOverY = (Screen_height - metrics.getHeight()) / 2;
        g.drawString(gameOverStr, gameOverX, gameOverY);


        // Second line: "Total score: X"
        g.setColor(Color.pink);
        String scoreStr = "Total score: " + foodEaten;
        int scoreX = (Screen_width - metrics.stringWidth(scoreStr)) / 2;
        int scoreY = gameOverY + metrics.getHeight();
        g.drawString(scoreStr, scoreX, scoreY);

        // restart button
        resetButton = new JButton();

        resetButton.setText("Restart?");
        resetButton.setBackground(Color.green);
        resetButton.setFocusPainted(false);
        resetButton.setSize(90,25);
        
        resetButton.setFont(new Font("Arial Narrow", Font.BOLD, 16));

        resetButton.setLocation(230, 350);
        resetButton.addActionListener(this);

       game = new GamePanel();

        this.add(resetButton);
        this.add(game);
        this.setVisible(true);
        // restart button
    }




    @Override
    public void actionPerformed(ActionEvent e){
        if(running) {
            move();
            checkFood();
            checkCollisions();

        }
        repaint();
        // restart button
        if (e.getSource() == resetButton) {
            this.remove(game);

            game = new GamePanel();
            this.add(game);
            resetButton.setVisible(false);
            SwingUtilities.updateComponentTreeUI(this);
            // restart button

        }
    }

    public class MyKeyAdapter extends KeyAdapter{
        @Override
        public void keyPressed(KeyEvent e) {
            switch(e.getKeyCode()) {
                case KeyEvent.VK_LEFT:
                    if(direction != 'R') {
                        direction = 'L';
                    }
                    break;
                case KeyEvent.VK_RIGHT:
                    if(direction != 'L') {
                        direction = 'R';
                    }
                    break;
                case KeyEvent.VK_UP:
                    if(direction != 'D') {
                        direction = 'U';
                    }
                    break;
                case KeyEvent.VK_DOWN:
                    if(direction != 'U') {
                        direction = 'D';
                    }
                    break;
            }
        }
    }


}