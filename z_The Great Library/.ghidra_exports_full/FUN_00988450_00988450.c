// FUN_00988450 @ 00988450 body=[[00988450, 00988485]]


char FUN_00988450(wchar_t param_1,char param_2)

{
  int iVar1;
  int in_ECX;
  char local_10 [8];
  mbstate_t local_8;
  
  local_8 = 0;
  iVar1 = __Wcrtomb(local_10,param_1,&local_8,(_Cvtvec *)(in_ECX + 0x18));
  if (iVar1 == 1) {
    param_2 = local_10[0];
  }
  return param_2;
}

