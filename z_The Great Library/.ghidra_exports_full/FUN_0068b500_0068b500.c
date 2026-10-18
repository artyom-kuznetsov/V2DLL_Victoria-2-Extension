// FUN_0068b500 @ 0068b500 body=[[0068b500, 0068b5ae] [0068b5b2, 0068b5cc] [0068b5d0, 0068b601]]


/* WARNING: Removing unreachable block (ram,0x0068b5a6) */

int FUN_0068b500(int param_1)

{
  int iVar1;
  int in_ECX;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3fe98;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  FUN_00408ed0(local_38,0,0xffffffff);
  iVar1 = *(int *)(param_1 + 0x18);
  local_1c = 0x2d2d2d;
  for (; (iVar1 != 0 && (*(int *)(iVar1 + 0x1c) != in_ECX)); iVar1 = *(int *)(iVar1 + 0x3c)) {
  }
  if (local_24 < 0x10) {
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return param_1 + 0x28;
    }
    ExceptionList = local_10;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

