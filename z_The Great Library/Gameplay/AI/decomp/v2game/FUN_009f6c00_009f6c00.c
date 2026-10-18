// FUN_009f6c00 @ 009f6c00 body=[[009f6c00, 009f6c77] [009f6c7b, 009f6cf7] [009f6cfb, 009f6d27] [009f6d2b, 009f6d3d]]


void FUN_009f6c00(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  undefined4 local_64;
  uint local_50;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ea58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_ECX + 0xb4))();
  if (cVar1 != '\0') {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00408ed0(in_ECX + 0x14,0,0xffffffff);
    local_8 = 0;
    FUN_00408ed0(local_2c,0,0xffffffff);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    FUN_00409350(&DAT_00ded94d,0);
    uVar2 = FUN_009f7c00((short)in_ECX[0x1c],*(undefined2 *)((int)in_ECX + 0x6e));
    FUN_009895f0(uVar2);
    local_8 = 1;
    iVar3 = in_ECX[10];
    FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
    uVar2 = FUN_009895f0(iVar3);
    local_8._0_1_ = 2;
    FUN_00408ed0(uVar2,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64);
    }
    FUN_00408ed0(local_48,0,0xffffffff);
    *(undefined1 *)((int)in_ECX + 0xb5) = 1;
    in_ECX[0xe] = *(int *)((int)in_ECX + 0x6e);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  *(undefined1 *)(in_ECX + 0x1b) = 0;
  ExceptionList = local_10;
  return;
}

