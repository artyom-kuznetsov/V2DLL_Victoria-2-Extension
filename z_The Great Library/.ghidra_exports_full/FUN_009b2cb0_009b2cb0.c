// FUN_009b2cb0 @ 009b2cb0 body=[[009b2cb0, 009b2d06]]


void FUN_009b2cb0(int param_1,char param_2)

{
  int *piVar1;
  int *in_ECX;
  
  (**(code **)(in_ECX[0x1c] + 0x20))(param_1,1);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x1c;
  }
  for (piVar1 = (int *)in_ECX[0x18]; (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  if (param_2 != '\0') {
    (**(code **)(*in_ECX + 0x6c))();
  }
  return;
}

