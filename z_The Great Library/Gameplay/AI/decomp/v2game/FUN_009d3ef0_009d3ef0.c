// FUN_009d3ef0 @ 009d3ef0 body=[[009d3ef0, 009d3f66]]


undefined4 * FUN_009d3ef0(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 4);
  if ((param_2 == (int *)*piVar1) && (param_3 == piVar1)) {
    FUN_009d3d20(piVar1[1]);
    *(int *)(*(int *)(unaff_ESI + 4) + 4) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)*(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_ESI + 4);
    *(int *)(*(int *)(unaff_ESI + 4) + 8) = *(int *)(unaff_ESI + 4);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *param_1 = **(undefined4 **)(unaff_ESI + 4);
    return param_1;
  }
  while (param_2 != param_3) {
    FUN_009d3e90();
    FUN_009d3a00();
  }
  *param_1 = param_2;
  return param_1;
}

