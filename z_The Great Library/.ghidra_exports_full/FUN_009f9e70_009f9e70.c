// FUN_009f9e70 @ 009f9e70 body=[[009f9e70, 009f9eb1]]


void FUN_009f9e70(void)

{
  int *piVar1;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)unaff_ESI[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)unaff_ESI[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  return;
}

