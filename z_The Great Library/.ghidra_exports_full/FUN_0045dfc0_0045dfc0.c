// FUN_0045dfc0 @ 0045dfc0 body=[[0045dfc0, 0045e05f]]


void FUN_0045dfc0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  if (param_2 == 0x1a) {
    FUN_009a1750(in_ECX + 8,0);
  }
  else {
    if (param_2 == 0xd9) {
      FUN_009a1750(in_ECX + 0x24,0);
      return;
    }
    if (param_2 == 0x9b8) {
      piVar1 = (int *)FUN_00aae9af(0x28);
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = (int)CNewsCasePrio::vftable;
        piVar1[1] = 0x18d;
        piVar1[3] = 0x18d;
        piVar1[4] = 0;
        piVar1[5] = 0;
        piVar1[6] = 0;
        *(undefined2 *)(piVar1 + 8) = 0;
        piVar1[2] = (int)CAndTrigger::vftable;
        piVar1[9] = 0;
      }
      (**(code **)(*piVar1 + 0xc))(param_1);
      FUN_0068f390();
      return;
    }
  }
  return;
}

