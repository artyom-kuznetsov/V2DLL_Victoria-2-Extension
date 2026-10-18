// FUN_009e3c40 @ 009e3c40 body=[[009e3c40, 009e3d19]]


void FUN_009e3c40(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[0x126];
  if (iVar1 == 3) {
    param_1 = CONCAT22(param_1._2_2_,(short)param_1 + (short)in_ECX[0x133]);
  }
  else {
    if (iVar1 == 1) {
      param_1 = CONCAT22(param_1._2_2_,(short)param_1 + (short)in_ECX[0x133]);
      (**(code **)(*in_ECX + 0x18))(param_1);
      return;
    }
    if (iVar1 != 2) {
      if (iVar1 == 4) {
        param_1 = CONCAT22(param_1._2_2_ + (short)(in_ECX[0x134] / 2),
                           (short)param_1 + (short)(in_ECX[0x133] / 2));
        (**(code **)(*in_ECX + 0x18))(param_1);
        return;
      }
      if (iVar1 == 5) {
        param_1 = CONCAT22(param_1._2_2_,(short)param_1 + (short)(in_ECX[0x133] / 2));
        (**(code **)(*in_ECX + 0x18))(param_1);
        return;
      }
      if (iVar1 == 6) {
        param_1 = CONCAT22(param_1._2_2_ + (short)in_ECX[0x134],
                           (short)param_1 + (short)(in_ECX[0x133] / 2));
      }
      (**(code **)(*in_ECX + 0x18))(param_1);
      return;
    }
  }
  param_1 = CONCAT22(param_1._2_2_ + (short)in_ECX[0x134],(short)param_1);
  (**(code **)(*in_ECX + 0x18))(param_1);
  return;
}

