// FUN_00730290 @ 00730290 body=[[00730290, 007302fb] [007302ff, 00730355] [00730359, 00730381]]


void FUN_00730290(char *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_ESI;
  int unaff_EDI;
  char *local_5c;
  uint *local_58;
  undefined4 local_4c [5];
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fe40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(unaff_ESI + 0x4c) = unaff_EDI;
  local_14 = (undefined1 *)&local_5c;
  *(undefined4 *)(unaff_ESI + 0x2c) = param_2;
  *(char **)(unaff_ESI + 0x28) = param_1;
  local_5c = param_1;
  local_58 = (uint *)param_2;
  uVar1 = FUN_00988bb0(local_4c,0);
  local_58 = (uint *)0xffffffff;
  local_5c = (char *)0x0;
  local_8 = 0;
  FUN_00408ed0(uVar1);
  local_8 = 0xffffffff;
  if (0xf < local_38) {
    local_58 = (uint *)local_4c[0];
                    /* WARNING: Subroutine does not return */
    local_5c = &UNK_007302fc;
    FUN_00aae91b();
  }
  local_58 = (uint *)0xa;
  local_5c = "goods_type";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  local_58 = local_30;
  local_5c = (char *)0x730330;
  piVar2 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x20) + 0x44))();
  local_5c = (char *)(*(int *)(unaff_EDI + 8) + 2);
  (**(code **)(*piVar2 + 0x48))();
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  (**(code **)(*(int *)(unaff_ESI + 0x1c) + 0x24))();
  ExceptionList = local_10;
  return;
}

