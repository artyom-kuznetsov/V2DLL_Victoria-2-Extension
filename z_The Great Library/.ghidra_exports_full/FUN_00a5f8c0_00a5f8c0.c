// FUN_00a5f8c0 @ 00a5f8c0 body=[[00a5f8c0, 00a5f97f] [00a5f983, 00a5f9ed] [00a5f9f1, 00a5fa42] [00a5fa46, 00a5fa6a]]


/* WARNING: Removing unreachable block (ram,0x00a5fa3a) */

void * FUN_00a5f8c0(void *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint local_34;
  uint local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e156;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  _eh_vector_constructor_iterator_(param_1,0x10,2,FUN_00413490,FUN_0040b3c0);
  local_8 = 0;
  *(undefined4 *)((int)param_1 + 0x34) = 0xf;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0x20) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 1;
  iVar3 = 0;
  while( true ) {
    if (iVar3 == -1) {
      ExceptionList = local_10;
      return param_1;
    }
    param_2._0_1_ = 10;
    iVar2 = FUN_005484e0(uVar1,&param_2,1);
    param_2 = CONCAT31(param_2._1_3_,0x3b);
    iVar3 = FUN_005484e0(uVar1,&param_2,1);
    FUN_009895f0(iVar3);
    local_8._0_1_ = 2;
    FUN_00a840b0();
    local_8._0_1_ = 1;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    local_18 = 1;
    if (iVar3 < iVar2) break;
LAB_00a5fa46:
    if (iVar2 == -1) {
      ExceptionList = local_10;
      return param_1;
    }
  }
  param_2 = CONCAT31(param_2._1_3_,0x3b);
  do {
    iVar3 = FUN_005484e0(uVar1,&param_2,1);
    if (local_18 == param_3) {
      if (iVar3 == -1) {
        local_20 = 0xf;
        local_34 = local_34 & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_8._0_1_ = 4;
        FUN_00a840b0();
        local_8._0_1_ = 1;
        goto LAB_00a5fa46;
      }
      FUN_009895f0(iVar3);
      local_8._0_1_ = 3;
      FUN_00a840b0();
      local_8._0_1_ = 1;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34);
      }
    }
    if ((iVar3 == -1) || (local_18 = local_18 + 1, iVar2 <= iVar3)) goto LAB_00a5fa46;
  } while( true );
}

