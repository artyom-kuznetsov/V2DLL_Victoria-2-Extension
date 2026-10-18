// FUN_00b2bdd0 @ 00b2bdd0 body=[[00b2bdd0, 00b2bdfa]]


byte FUN_00b2bdd0(undefined4 *param_1)

{
  char cVar1;
  
  if (param_1[1] != 0) {
    param_1[1] = param_1[1] + -1;
    cVar1 = *(char *)*param_1;
    *param_1 = (char *)*param_1 + 1;
    return -(cVar1 != '\0') & 6;
  }
  return 6;
}

