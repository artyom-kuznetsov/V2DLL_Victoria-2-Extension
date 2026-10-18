// FUN_00916d30 @ 00916d30 body=[[00916d30, 00916daf]]


void FUN_00916d30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  FUN_0092a7c0(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc),param_1,param_2);
  iVar1 = *(int *)(in_ECX + 0x14) * 4;
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                                0xbe8) + iVar1) + 0x34) != 0) {
    FUN_00929bf0(in_ECX + 0x28,
                 *(undefined4 *)
                  (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(in_ECX + 0xc) * 4) + 0xbe8) + iVar1) + 0x34));
  }
  return;
}

