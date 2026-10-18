// FUN_0067a570 @ 0067a570 body=[[0067a570, 0067a5b9]]


undefined4 *
FUN_0067a570(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    FUN_00658fd0(param_2 + 2);
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return param_1;
}

