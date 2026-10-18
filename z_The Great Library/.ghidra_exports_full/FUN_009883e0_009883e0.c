// FUN_009883e0 @ 009883e0 body=[[009883e0, 00988448]]


undefined1 * FUN_009883e0(undefined1 *param_1,undefined1 *param_2,wchar_t *param_3)

{
  undefined1 *puVar1;
  wchar_t wVar2;
  int iVar3;
  int in_ECX;
  undefined1 *puVar4;
  wchar_t *pwVar5;
  
  puVar1 = param_2;
  puVar4 = param_1;
  if (param_1 != param_2) {
    pwVar5 = param_3;
    do {
      param_1 = (undefined1 *)CONCAT31(param_1._1_3_,*puVar4);
      param_3 = (wchar_t *)0x0;
      iVar3 = __Mbrtowc((wchar_t *)&param_2,(char *)&param_1,1,(mbstate_t *)&param_3,
                        (_Cvtvec *)(in_ECX + 0x18));
      wVar2 = L'\xffff';
      if (-1 < iVar3) {
        wVar2 = (wchar_t)param_2;
      }
      *pwVar5 = wVar2;
      puVar4 = puVar4 + 1;
      pwVar5 = pwVar5 + 1;
    } while (puVar4 != puVar1);
  }
  return puVar4;
}

