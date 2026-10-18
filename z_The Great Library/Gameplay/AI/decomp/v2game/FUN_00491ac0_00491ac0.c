// FUN_00491ac0 @ 00491ac0 body=[[00491ac0, 00491b2a] [00491b2e, 00491b3d]]


void FUN_00491ac0(undefined4 param_1)

{
  int unaff_ESI;
  uint in_stack_00000018;
  undefined2 in_stack_00000020;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ce98;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_1,0,0xffffffff);
  FUN_004f9be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0x50) * 4),&param_1
              );
  *(undefined2 *)(unaff_ESI + 0x84) = in_stack_00000020;
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

