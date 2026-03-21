height = float(input("请输入身高（单位：米）："))
weight = float(input("请输入体重（单位：千克）："))
bmi = weight / (height ** 2)
print(f"您的BMI指数为：{bmi:.2f}")