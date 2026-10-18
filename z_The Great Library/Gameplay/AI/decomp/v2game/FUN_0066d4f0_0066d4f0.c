// FUN_0066d4f0 @ 0066d4f0 body=[[0066d4f0, 0066d560] [0066d564, 0066d60a]]


void FUN_0066d4f0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[0x36d] != 0xc) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("click",5);
    local_8 = 0;
    piVar1 = (int *)FUN_009c7290();
    (**(code **)(*piVar1 + 0x60))(local_2c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  iVar2 = DAT_0125870c;
  local_8 = 0xffffffff;
  in_ECX[0x36d] = 0xc;
  *(undefined4 *)(iVar2 + 0x2ad8) = 0xc;
  FUN_0066c180(in_ECX,0xd);
  iVar2 = FUN_00475500();
  *(undefined1 *)(iVar2 + 0xe6) = 0;
  iVar2 = FUN_00475500();
  *(undefined4 *)(iVar2 + 0xec) = 0xffba;
  iVar2 = FUN_00475500();
  *(undefined4 *)(iVar2 + 0xf0) = 5;
  iVar2 = (**(code **)(*in_ECX + 0x38))();
  FUN_00800690(iVar2 + 0x20bc);
  (**(code **)(*in_ECX + 0x38))();
  FUN_00819830();
  uVar3 = (**(code **)(*in_ECX + 0x38))();
  FUN_006458d0(uVar3);
  ExceptionList = local_10;
  return;
}

