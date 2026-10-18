// FUN_00804e70 @ 00804e70 body=[[00804e70, 00804ecd]]


void FUN_00804e70(int *param_1)

{
  int *piVar1;
  int *in_EAX;
  int *piVar2;
  
  if (in_EAX != param_1) {
    piVar2 = in_EAX + 1;
    do {
      piVar1 = (int *)piVar2[-1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar1 = (int *)piVar2[1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      piVar2[1] = 0;
      piVar2[-1] = 0;
      *piVar2 = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      piVar2[6] = 0;
      piVar1 = piVar2 + 8;
      piVar2 = piVar2 + 9;
    } while (piVar1 != param_1);
  }
  return;
}

