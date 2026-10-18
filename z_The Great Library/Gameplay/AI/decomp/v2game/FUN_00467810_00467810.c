// FUN_00467810 @ 00467810 body=[[00467810, 0046788c] [00467890, 004678ce]]


void FUN_00467810(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *unaff_EDI;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0045e4e0(param_2);
  local_8 = 0;
  uVar2 = FUN_0045c080(unaff_EDI[1],uVar1);
  if ((uVar2 < *unaff_EDI) || (unaff_EDI[1] <= uVar2)) {
    iVar3 = 0x15;
  }
  else {
    iVar3 = (int)(uVar2 - *unaff_EDI) / 0x1c;
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if (iVar3 == 0) {
    *param_1 = *(undefined4 *)(*(int *)(param_2 + 0x54) + 4);
    ExceptionList = local_10;
    return;
  }
  *param_1 = **(undefined4 **)(param_2 + 0x54);
  ExceptionList = local_10;
  return;
}

