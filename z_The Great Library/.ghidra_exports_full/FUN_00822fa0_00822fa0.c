// FUN_00822fa0 @ 00822fa0 body=[[00822fa0, 00823098]]


void FUN_00822fa0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  float fVar5;
  double in_XMM0_Qa;
  
  piVar1 = *(int **)(unaff_EDI + 0x68);
joined_r0x00822fad:
  do {
    if (piVar1 == (int *)0x0) {
      return;
    }
    fVar5 = SUB84(in_XMM0_Qa,0);
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (((*(int *)(iVar2 + 0xec) < 1) || (*(int *)(iVar2 + 0x74) != 0)) ||
          (*(char *)(iVar2 + 0x104) != '\0'));
  iVar3 = *(int *)(iVar2 + 0xdc);
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) != '\0') goto code_r0x00822fee;
  goto LAB_0082304d;
code_r0x00822fee:
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0x38) * 4);
  if ((*(int *)(iVar3 + 0x134) == *(int *)(iVar4 + 0x20)) ||
     (((*(int *)(*(int *)(*(int *)(iVar4 + 0xbe8) + *(int *)(iVar3 + 0x134) * 4) + 0x34) == 0 &&
       (((*(char *)(iVar3 + 0x130) != 'R' || (*(char *)(iVar3 + 0x131) != 'E')) ||
        (*(char *)(iVar3 + 0x132) != 'B')))) &&
      (((*(char *)(iVar4 + 0x1c) != 'R' || (*(char *)(iVar4 + 0x1d) != 'E')) ||
       (*(char *)(iVar4 + 0x1e) != 'B')))))) {
LAB_0082304d:
    FUN_00827410(unaff_EDI,
                 *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar2 + 0xe4) * 4),1);
    in_XMM0_Qa = (double)fVar5;
    if (in_XMM0_Qa < 0.8500000238418579) {
      FUN_00822e40(unaff_EDI,iVar2);
    }
  }
  goto joined_r0x00822fad;
}

