// FUN_0068bf00 @ 0068bf00 body=[[0068bf00, 0068bf83]]


void FUN_0068bf00(void)

{
  int unaff_ESI;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(unaff_ESI + 0xae0) - *(int *)(unaff_ESI + 0xadc) & 0xfffffffcU)) {
    do {
      FUN_00520150(*(undefined4 *)(*(int *)(unaff_ESI + 0xadc) + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0xae0) - *(int *)(unaff_ESI + 0xadc) >> 2);
  }
  FUN_0068d250(unaff_ESI,0);
  FUN_00482930(*(undefined4 *)(unaff_ESI + 0xbcc),1);
  FUN_004808d0(*(undefined4 *)(unaff_ESI + 0xbcc),1,0);
  FUN_0068d950(unaff_ESI);
  iVar1 = 0;
  do {
    FUN_00489990(*(undefined4 *)(unaff_ESI + 0xbcc),1,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  FUN_0068dc70(unaff_ESI);
  return;
}

