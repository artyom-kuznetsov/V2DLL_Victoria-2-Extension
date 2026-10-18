// FUN_009d41e0 @ 009d41e0 body=[[009d41e0, 009d4209] [009d420d, 009d4224] [009d4232, 009d438e]]


void FUN_009d41e0(undefined4 *param_1,char param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *in_EAX;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  
  if (&UNK_00e6c2b2 < *(undefined **)(unaff_EDI + 8)) {
    FUN_009d1130();
    if ((uint)param_3[8] < 0x10) {
      param_3[8] = 0xf;
      param_3[7] = 0;
      *(undefined1 *)(param_3 + 3) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(param_3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3[3]);
  }
  *(undefined **)(unaff_EDI + 8) = *(undefined **)(unaff_EDI + 8) + 1;
  param_3[1] = (int)in_EAX;
  if (in_EAX == *(undefined4 **)(unaff_EDI + 4)) {
    (*(undefined4 **)(unaff_EDI + 4))[1] = param_3;
    **(undefined4 **)(unaff_EDI + 4) = param_3;
    *(int **)(*(int *)(unaff_EDI + 4) + 8) = param_3;
  }
  else if (param_2 == '\0') {
    in_EAX[2] = param_3;
    if (in_EAX == *(undefined4 **)(*(int *)(unaff_EDI + 4) + 8)) {
      *(int **)(*(int *)(unaff_EDI + 4) + 8) = param_3;
    }
  }
  else {
    *in_EAX = param_3;
    if (in_EAX == (undefined4 *)**(int **)(unaff_EDI + 4)) {
      **(int **)(unaff_EDI + 4) = (int)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x128);
  piVar5 = param_3;
  do {
    if (cVar1 != '\0') {
      iVar4 = *(int *)(*(int *)(unaff_EDI + 4) + 4);
      *param_1 = param_3;
      *(undefined1 *)(iVar4 + 0x128) = 1;
      return;
    }
    piVar2 = (int *)piVar5[1];
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x128) == '\0') {
LAB_009d42db:
        *(undefined1 *)(piVar2 + 0x4a) = 1;
        *(undefined1 *)(iVar4 + 0x128) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x128) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar2[2]) {
          FUN_009d3d90(unaff_EDI);
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0x128) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x128) = 0;
        FUN_009d3df0(unaff_EDI);
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x128) == '\0') goto LAB_009d42db;
      if (piVar5 == (int *)*piVar2) {
        FUN_009d3df0(unaff_EDI);
        piVar5 = piVar2;
      }
      *(undefined1 *)(piVar5[1] + 0x128) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x128) = 0;
      iVar4 = *(int *)(piVar5[1] + 4);
      piVar2 = *(int **)(iVar4 + 8);
      *(int *)(iVar4 + 8) = *piVar2;
      if (*(char *)(*piVar2 + 0x129) == '\0') {
        *(int *)(*piVar2 + 4) = iVar4;
      }
      piVar2[1] = *(int *)(iVar4 + 4);
      if (iVar4 == *(int *)(*(int *)(unaff_EDI + 4) + 4)) {
        *(int **)(*(int *)(unaff_EDI + 4) + 4) = piVar2;
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
    cVar1 = *(char *)(piVar5[1] + 0x128);
  } while( true );
}

