// FUN_00815ea0 @ 00815ea0 body=[[00815ea0, 00815ef8] [00815efc, 00815f0b]]


undefined1 FUN_00815ea0(undefined4 *param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_EAX;
  
  while( true ) {
    if (in_EAX == param_1) {
      return param_2;
    }
    piVar1 = (int *)*in_EAX;
    if (piVar1 != (int *)0x0) break;
    in_EAX = in_EAX + 1;
  }
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)piVar1[1];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)piVar1[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar1[2] = 0;
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

