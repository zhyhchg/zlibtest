// zlibtest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <stdio.h>
#include "zlib.h"

int main(int argc, char* argv[])
{
unsigned char strSrc[] = "hello world! aaaaa bbbbb ccccc ddddd ���Ĳ��� yes";  
  unsigned char buf[1024] = {0};  
  unsigned char strDst[1024] = {0};  
  unsigned long srcLen = sizeof(strSrc);  
  unsigned long bufLen = sizeof(buf);  
  unsigned long dstLen = sizeof(strDst);  
  
  printf("Src string:%s\nLength:%ld\n", strSrc, srcLen);  
    
  /* ѹ�� */  
  compress(buf, &bufLen, strSrc, srcLen);  
  printf("After Compressed Length:%ld\n", bufLen);  
  
  /* ��ѹ�� */  
  uncompress(strDst, &dstLen, buf, bufLen);  
  printf("After UnCompressed Length:%ld\n",dstLen);  
  
  printf("UnCompressed String:%s\n",strDst);  
	return 0;
}

