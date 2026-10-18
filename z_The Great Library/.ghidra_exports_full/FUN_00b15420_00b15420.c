// FUN_00b15420 @ 00b15420 body=[[00b15420, 00b15531]]


float * FUN_00b15420(float *param_1)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  float local_28;
  float local_24;
  float local_20;
  undefined4 *local_1c;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39d29;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  FUN_00b14fa0(&local_1c,0x2c);
  if (local_18 == 4) {
    if ((char *)local_1c[9] == (char *)0x0) {
      local_20 = -1.0;
    }
    else {
      dVar3 = _atof((char *)local_1c[9]);
      local_20 = (float)dVar3;
    }
    if ((char *)local_1c[6] == (char *)0x0) {
      local_24 = -1.0;
    }
    else {
      dVar3 = _atof((char *)local_1c[6]);
      local_24 = (float)dVar3;
    }
    if ((char *)local_1c[3] == (char *)0x0) {
      local_28 = -1.0;
    }
    else {
      dVar3 = _atof((char *)local_1c[3]);
      local_28 = (float)dVar3;
    }
    if ((char *)*local_1c == (char *)0x0) {
      fVar1 = -1.0;
    }
    else {
      dVar3 = _atof((char *)*local_1c);
      fVar1 = (float)dVar3;
    }
    *param_1 = fVar1;
    param_1[1] = local_28;
    param_1[2] = local_24;
  }
  else {
    local_20 = 0.0;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
  }
  param_1[3] = local_20;
  local_4 = 0xffffffff;
  FUN_00b00960(uVar2);
  ExceptionList = local_c;
  return param_1;
}

