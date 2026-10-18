// FUN_0092aae0 @ 0092aae0 body=[[0092aae0, 0092ab63]]


void FUN_0092aae0(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(in_EAX + 9) = 0;
  if ((*(char *)(in_EAX + 8) != '\0') &&
     (iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4) + 0xbe8)
                               + param_4 * 4) + 0x34), iVar1 != 0)) {
    iVar1 = FUN_00936fc0(iVar1,&param_1,&param_3,0);
    iVar1 = iVar1 + -0x28 +
            *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0x680) / 1000;
    if (0 < iVar1) {
      iVar2 = FUN_009293c0();
      if (iVar2 < iVar1) {
        *(undefined1 *)(in_EAX + 9) = 1;
      }
    }
  }
  return;
}

