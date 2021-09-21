if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    for name in student_marks:
        if(query_name ==  name):
                total_score=float(0)
                for i in scores:
                    total_score = i + total_score 
                    result = float(total_score/3)
                print(f'\tScore:{total_score}, result={result}')
