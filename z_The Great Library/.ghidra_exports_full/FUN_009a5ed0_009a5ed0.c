// FUN_009a5ed0 @ 009a5ed0 body=[[009a5ed0, 009a5ef3] [009a5f01, 009a6035]]


void FUN_009a5ed0(undefined4 *param_1,char param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_EAX;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  if (0x6666664 < *(uint *)(in_ECX + 8)) {
    FUN_009a56d0();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) + 1;
  param_3[1] = (int)in_EAX;
  if (in_EAX == *(undefined4 **)(in_ECX + 4)) {
    (*(undefined4 **)(in_ECX + 4))[1] = param_3;
    **(undefined4 **)(in_ECX + 4) = param_3;
    iVar4 = *(int *)(in_ECX + 4);
  }
  else {
    if (param_2 != '\0') {
      *in_EAX = param_3;
      if (in_EAX == (undefined4 *)**(int **)(in_ECX + 4)) {
        **(int **)(in_ECX + 4) = (int)param_3;
      }
      goto LAB_009a5f40;
    }
    in_EAX[2] = param_3;
    iVar4 = *(int *)(in_ECX + 4);
    if (in_EAX != *(undefined4 **)(iVar4 + 8)) goto LAB_009a5f40;
  }
  *(int **)(iVar4 + 8) = param_3;
LAB_009a5f40:
  cVar1 = *(char *)(param_3[1] + 0x34);
  piVar5 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(in_ECX + 4) + 4) + 0x34) = 1;
      *param_1 = param_3;
      return;
    }
    piVar2 = (int *)piVar5[1];
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x34) == '\0') {
LAB_009a5f9c:
        *(undefined1 *)(piVar2 + 0xd) = 1;
        *(undefined1 *)(iVar4 + 0x34) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x34) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar2[2]) {
          FUN_009a5740(in_ECX);
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0x34) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x34) = 0;
        FUN_009a57a0(in_ECX);
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x34) == '\0') goto LAB_009a5f9c;
      if (piVar5 == (int *)*piVar2) {
        FUN_009a57a0(in_ECX);
        piVar5 = piVar2;
      }
      *(undefined1 *)(piVar5[1] + 0x34) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x34) = 0;
      iVar4 = *(int *)(piVar5[1] + 4);
      piVar2 = *(int **)(iVar4 + 8);
      *(int *)(iVar4 + 8) = *piVar2;
      if (*(char *)(*piVar2 + 0x35) == '\0') {
        *(int *)(*piVar2 + 4) = iVar4;
      }
      piVar2[1] = *(int *)(iVar4 + 4);
      if (iVar4 == *(int *)(*(int *)(in_ECX + 4) + 4)) {
        *(int **)(*(int *)(in_ECX + 4) + 4) = piVar2;
      }
      else {
        piVar3 = *(int **)(iVar4 + 4);
        if (iVar4 == *piVar3) {
          *piVar3 = (int)piVar2;
        }
        else {
          piVar3[2] = (int)piVar2;
        }
      }
      *piVar2 = iVar4;
      *(int **)(iVar4 + 4) = piVar2;
    }
    cVar1 = *(char *)(piVar5[1] + 0x34);
  } while( true );
}

