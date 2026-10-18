// FUN_009debc0 @ 009debc0 body=[[009debc0, 009dec23]]


undefined4 FUN_009debc0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)FUN_00973bd0(in_ECX + 0x1d8);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_00973bd0(in_ECX + 0x1d8);
  }
  (**(code **)(*piVar1 + 0x34))
            (in_ECX + 0x1bc,*(undefined2 *)(in_ECX + 0x1ac),*(undefined2 *)(in_ECX + 0x1ae),
             in_ECX + 0x1b0,param_1);
  return param_1;
}

