// FUN_0043c490 @ 0043c490 body=[[0043c490, 0043c4e8]]


void FUN_0043c490(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  do {
    if (param_2[2] != 0) {
      FUN_0043c490(param_1,param_2[2]);
    }
    iVar1 = *param_2;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1c) != '\0')) {
      FUN_0099fd80(iVar1,0x29f);
    }
    if (param_2[4] != 0) {
      FUN_0043c490(param_1,param_2[4]);
    }
    param_2 = (int *)param_2[3];
  } while (param_2 != (int *)0x0);
  return;
}

