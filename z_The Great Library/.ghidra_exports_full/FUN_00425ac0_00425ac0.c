// FUN_00425ac0 @ 00425ac0 body=[[00425ac0, 00425b3e]]


void FUN_00425ac0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x20) * 4) + 0x31) != '\0')
  {
    uVar1 = *(undefined4 *)(in_ECX + 0x1c);
    in_EAX[1] = *(undefined4 *)(in_ECX + 0x20);
    *in_EAX = uVar1;
    return;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x3c);
  if ((0 < (int)(*(int *)(in_ECX + 0x40) - (int)puVar2 & 0xfffffff8U)) &&
     (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar2[1] * 4) + 0x31) != '\0')) {
    uVar1 = puVar2[1];
    *in_EAX = *puVar2;
    in_EAX[1] = uVar1;
    return;
  }
  in_EAX[1] = 0;
  *in_EAX = 0x2d2d2d;
  return;
}

