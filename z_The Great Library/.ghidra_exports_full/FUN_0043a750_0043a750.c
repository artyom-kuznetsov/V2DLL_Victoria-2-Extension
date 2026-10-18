// FUN_0043a750 @ 0043a750 body=[[0043a750, 0043a81c] [0043a820, 0043a850]]


/* WARNING: Removing unreachable block (ram,0x0043a784) */

void FUN_0043a750(int *param_1)

{
  int iVar1;
  char cVar2;
  int *in_EAX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (in_EAX != param_1) {
    iVar4 = *param_1;
    uVar3 = param_1[1] - iVar4 >> 3;
    if (uVar3 == 0) {
      if (*in_EAX != in_EAX[1]) {
        in_EAX[1] = *in_EAX;
        return;
      }
    }
    else {
      iVar1 = *in_EAX;
      uVar5 = in_EAX[1] - iVar1 >> 3;
      if (uVar3 <= uVar5) {
        FUN_0043ab30(iVar1);
        in_EAX[1] = *in_EAX + (param_1[1] - *param_1 >> 3) * 8;
        return;
      }
      if (uVar3 <= (uint)(in_EAX[2] - iVar1 >> 3)) {
        FUN_0043ab30(iVar1);
        iVar4 = FUN_007e72f0(iVar4 + uVar5 * 8,uVar5);
        in_EAX[1] = iVar4;
        return;
      }
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      cVar2 = FUN_004deee0();
      if (cVar2 != '\0') {
        iVar4 = FUN_007e72f0(*param_1,uVar5);
        in_EAX[1] = iVar4;
      }
    }
  }
  return;
}

