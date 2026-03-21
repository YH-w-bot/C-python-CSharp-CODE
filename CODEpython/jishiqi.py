#输入
start_hour = int(input ("请输入开始时间的小时数："))
start_minute = int(input("请输入开始时间分钟数："))
end_hour = int(input("请输入结束时间的小时数："))
end_minurte = int(input("请输入结束时间的分钟数："))
#计算总分钟数
start_total =start_hour*60 + start_minute
end_total =end_hour *60 + end_minurte
#计算间隔
diff_total = end_total - start_total
diff_hour = diff_total // 60
diff_minute = diff_total % 60
#输出结果
print (f"时间间隔为{diff_hour}小时{diff_minute}分钟")   