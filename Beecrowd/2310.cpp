#include <bits/stdc++.h>
using namespace std;
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    fastIO();

    int n;
    cin >> n;

    string names[n];
    int s[n], b[n], a[n], s_suc[n], b_suc[n], a_suc[n];
    double t_suc_s = 0, t_suc_b = 0, t_suc_a = 0, t_s = 0, t_b = 0, t_a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
        cin >> s[i] >> b[i] >> a[i];
        cin >> s_suc[i] >> b_suc[i] >> a_suc[i];

        t_s += s[i];
        t_b += b[i];
        t_a += a[i];
        t_suc_s += s_suc[i];
        t_suc_b += b_suc[i];
        t_suc_a += a_suc[i];
    }

    double p_s = (t_suc_s / t_s) * 100;
    double p_b = (t_suc_b / t_b) * 100;
    double p_a = (t_suc_a / t_a) * 100;

    cout << fixed << setprecision(2) << "Pontos de Saque: " << p_s << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Bloqueio: " << p_b << " %." << endl;
    cout << fixed << setprecision(2) << "Pontos de Ataque: " << p_a << " %." << endl;

    return 0;
}