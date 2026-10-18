// FUN_00988490 @ 00988490 body=[[00988490, 009884ee]]


wchar_t * FUN_00988490(wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  wchar_t *pwVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  char *pcVar4;
  char local_c [8];
  
  pwVar1 = param_2;
  if (param_1 != param_2) {
    pcVar4 = param_4;
    do {
      param_2 = (wchar_t *)0x0;
      iVar3 = __Wcrtomb(local_c,*param_1,(mbstate_t *)&param_2,(_Cvtvec *)(in_ECX + 0x18));
      cVar2 = param_3;
      if (iVar3 == 1) {
        cVar2 = local_c[0];
      }
      *pcVar4 = cVar2;
      param_1 = param_1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (param_1 != pwVar1);
  }
  return param_1;
}

