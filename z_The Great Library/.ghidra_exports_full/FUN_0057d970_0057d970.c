// FUN_0057d970 @ 0057d970 body=[[0057d970, 0057d9ff] [0057da03, 0057da16]]


int FUN_0057d970(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41603;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x68);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (iVar1 != 0) {
    iVar2 = FUN_0057d0f0(iVar1);
  }
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(in_ECX + 0x54);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(in_ECX + 100);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return iVar2;
}

