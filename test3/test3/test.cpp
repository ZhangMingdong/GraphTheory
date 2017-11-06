/**
 * COPYRIGHT NOTICE
 * Copyright (c) 2014, Institute of CG & CAD, Tsinghua University.
 * All Rights Reserved.
 * 
 * @file    main.cpp
 * @brief   Write your own code here.
 * 
 * @version 1.1
 * @author  Jackie Pang
 * @e-mail: 15pengyi@gmail.com
 * @date    2012/10/11
 * @reviser	Gong Chao
 * @date	2014/10/13
 * @e-mail:	gcdofree@gmail.com
 */

#include <iostream>
#include "USSolver.h"

void USSolver::Solve(std::istream &inputStream, std::ostream &outputStream)
{
	//请在此填充代码
   
}



int main(int argc, char *argv[])
{
	//可在此更改测试文件
    std::string fileName = "test101.txt"; 
    
    USSolver unofficialSolver(fileName);
    const std::string unofficialAnswer = unofficialSolver.GetAnswer();

    std::cout << "Your Answer:" << unofficialAnswer << std::endl;
}