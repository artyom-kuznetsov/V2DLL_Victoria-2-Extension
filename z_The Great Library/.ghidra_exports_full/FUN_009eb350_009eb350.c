// FUN_009eb350 @ 009eb350 body=[[009eb350, 009eb3fd]]


void FUN_009eb350(float param_1)

{
  float fVar1;
  int *piVar2;
  int *in_ECX;
  
  fVar1 = (float)in_ECX[7];
  in_ECX[7] = (int)param_1;
  piVar2 = (int *)in_ECX[3];
  fVar1 = param_1 - fVar1;
  *(undefined1 *)(in_ECX + 6) = 1;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*(int *)(&DAT_00f20c60)[*piVar2] + 0x18))((int *)(&DAT_00f20c60)[*piVar2],&param_1)
    ;
    param_1 = (float)((int)param_1 + (10000 - (int)((fVar1 * 10000.0) / 3.0)));
    if ((int)param_1 < 1) {
      (**(code **)(*in_ECX + 0x2c))(*piVar2);
    }
    else {
      (**(code **)(*in_ECX + 0x50))(*piVar2,param_1);
    }
  }
  FUN_005499c0();
  return;
}

