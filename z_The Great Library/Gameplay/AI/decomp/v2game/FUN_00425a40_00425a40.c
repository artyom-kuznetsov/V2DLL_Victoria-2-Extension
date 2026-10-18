// FUN_00425a40 @ 00425a40 body=[[00425a40, 00425abe]]


void FUN_00425a40(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x18) * 4) + 0x31) != '\0')
  {
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    in_EAX[1] = *(undefined4 *)(in_ECX + 0x18);
    *in_EAX = uVar1;
    return;
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x2c);
  if ((0 < (int)(*(int *)(in_ECX + 0x30) - (int)puVar2 & 0xfffffff8U)) &&
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

