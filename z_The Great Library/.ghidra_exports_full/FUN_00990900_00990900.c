// FUN_00990900 @ 00990900 body=[[00990900, 0099092e]]


undefined4 * FUN_00990900(undefined4 *param_1)

{
  undefined4 in_EAX;
  undefined1 in_CL;
  
  *param_1 = &PTR_FUN_00e37c30;
  param_1[1] = in_EAX;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)((int)param_1 + 0x111) = in_CL;
  FUN_00990100();
  *param_1 = &PTR_FUN_00e37c3c;
  return param_1;
}

