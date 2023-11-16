import requests
from datetime import datetime, timedelta

def get_accepted_submissions(handle):
    url = f'https://codeforces.com/api/user.status?handle={handle}&from=1&count=100000'
    response = requests.get(url)
    data = response.json()

    if data['status'] == 'OK':
        submissions = data['result']
        accepted_submissions = [s for s in submissions if s['verdict'] == 'OK']
        return accepted_submissions
    else:
        print(f"Error fetching submissions for user {handle}")
        return None

def count_accepted_by_day(accepted_submissions):
    daily_counts = {}

    for submission in accepted_submissions:
        timestamp = submission['creationTimeSeconds']
        submission_date = datetime.utcfromtimestamp(timestamp).strftime('%Y-%m-%d')

        if submission_date in daily_counts:
            daily_counts[submission_date] += 1
        else:
            daily_counts[submission_date] = 1

    return daily_counts

def print_daily_counts(daily_counts):
    print("Day-wise Accepted Submissions:")
    for day, count in sorted(daily_counts.items()):
        print(f"{day}: {count} submissions")

if __name__ == "__main__":
    # Replace 'your_handle' with your Codeforces handle
    your_handle = 'Ashib15-5137'
    
    accepted_submissions = get_accepted_submissions(your_handle)

    if accepted_submissions:
        daily_counts = count_accepted_by_day(accepted_submissions)
        print_daily_counts(daily_counts)
