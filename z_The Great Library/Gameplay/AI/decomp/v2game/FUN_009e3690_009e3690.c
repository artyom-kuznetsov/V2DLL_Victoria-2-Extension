// FUN_009e3690 @ 009e3690 body=[[009e3690, 009e36f7] [009e36fb, 009e3740] [009e3744, 009e376d]]


/* WARNING: Removing unreachable block (ram,0x009e3738) */

void FUN_009e3690(void)

{
  int *piVar1;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00defe5c,4);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x38))(local_2c);
  local_8 = 0xffffffff;
  if (local_18 < 0x10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("Cool its working",0x10);
    local_8 = 1;
    FUN_009e7500();
    local_8 = 0xffffffff;
    (**(code **)(*piVar1 + 0xb0))();
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

