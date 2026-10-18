// FUN_0045e2d0 @ 0045e2d0 body=[[0045e2d0, 0045e423]]


void FUN_0045e2d0(int param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  int local_110 [66];
  int *local_8;
  
  if (param_2 == (int *)0x1a) {
    FUN_009a1750(in_ECX + 8,0);
  }
  else {
    if (param_2 == (int *)0xd9) {
      FUN_009a1750(in_ECX + 0x24,0);
      return;
    }
    if (param_2 == (int *)0x9b8) {
      param_2 = (int *)FUN_00aae9af(0x20);
      if (param_2 == (int *)0x0) {
        param_2 = (int *)0x0;
      }
      else {
        param_2[1] = 0x18d;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        *(undefined2 *)(param_2 + 6) = 0;
        *param_2 = (int)CAndTrigger::vftable;
      }
      local_8 = param_2;
      while( true ) {
        piVar2 = *(int **)(param_1 + 0x1c);
        if ((char)piVar2[0x44] == '\0') {
          iVar1 = (**(code **)(*piVar2 + 4))();
          piVar2[2] = iVar1;
          if (iVar1 == 0) {
            piVar2[3] = 0x13;
          }
          *(undefined1 *)(piVar2 + 0x44) = 1;
        }
        piVar2 = piVar2 + 3;
        piVar3 = local_110;
        for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar3 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
        }
        if ((local_110[0] == 4) || (local_110[0] == 0x13)) break;
        FUN_009a1440(param_1);
        if (*(int *)(param_1 + 0x20) == 0x344) {
          iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",param_2 + 7);
          if (iVar1 == 0) {
            FUN_009a1140();
          }
        }
        else if (*(int *)(param_1 + 0x20) == 0x3b6) {
          (**(code **)(*param_2 + 0xc))(param_1);
        }
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      FUN_0068f390();
      return;
    }
  }
  return;
}

