// FUN_00849e30 @ 00849e30 body=[[00849e30, 00849e51] [00849e61, 00849e8d]]


void FUN_00849e30(int *param_1)

{
  int *piVar1;
  int local_8;
  
  local_8 = 8;
  piVar1 = param_1;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)*piVar1);
    }
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1 = piVar1 + 4;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  _eh_vector_destructor_iterator_(param_1,0x10,8,FUN_00849e90);
  return;
}

