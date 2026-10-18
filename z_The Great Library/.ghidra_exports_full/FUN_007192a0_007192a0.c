// FUN_007192a0 @ 007192a0 body=[[007192a0, 0071944a] [00719450, 007195ec] [007195f0, 00719601]]


/* WARNING: Removing unreachable block (ram,0x00719560) */
/* WARNING: Removing unreachable block (ram,0x0071956d) */
/* WARNING: Removing unreachable block (ram,0x00719571) */
/* WARNING: Removing unreachable block (ram,0x0071957a) */
/* WARNING: Removing unreachable block (ram,0x00719580) */
/* WARNING: Removing unreachable block (ram,0x00719594) */
/* WARNING: Removing unreachable block (ram,0x00719589) */
/* WARNING: Removing unreachable block (ram,0x0071958e) */
/* WARNING: Removing unreachable block (ram,0x00719564) */
/* WARNING: Removing unreachable block (ram,0x0071956b) */
/* WARNING: Removing unreachable block (ram,0x0071951a) */
/* WARNING: Removing unreachable block (ram,0x0071953b) */
/* WARNING: Removing unreachable block (ram,0x00719536) */
/* WARNING: Removing unreachable block (ram,0x0071953d) */
/* WARNING: Removing unreachable block (ram,0x00719558) */
/* WARNING: Removing unreachable block (ram,0x0071959f) */
/* WARNING: Removing unreachable block (ram,0x007195a3) */
/* WARNING: Removing unreachable block (ram,0x007195a9) */
/* WARNING: Removing unreachable block (ram,0x007195c7) */
/* WARNING: Removing unreachable block (ram,0x007195e7) */

void FUN_007192a0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  pvStack_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &pvStack_14;
  FUN_004bf300(5);
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x30) * 4);
  if (*(char *)(iVar1 + 0x2d) == '\0') {
    if (*(char *)(iVar1 + 0x2e) != '\0') {
      piVar2 = *(int **)(iVar1 + 0x149c);
      while (piVar2 != (int *)0x0) {
        iVar3 = *piVar2;
        piVar2 = (int *)piVar2[2];
        cVar5 = FUN_004cd4c0();
        if (cVar5 != '\0') {
          FUN_004e9b90();
        }
        if ((((*(int *)(iVar3 + 0x80) == 2) || (*(int *)(iVar3 + 0x80) == 1)) &&
            (cVar5 = FUN_004cb370(in_ECX + 0x2c), cVar5 != '\0')) &&
           (iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x30) * 4),
           iVar6 = FUN_004cd300(in_ECX + 0x2c),
           iVar6 <= *(int *)(iVar3 + 0x15c4) - *(int *)(iVar3 + 0x15c0))) {
          FUN_004e9b90();
        }
      }
      piVar2 = *(int **)(iVar1 + 0xe44);
      while (piVar2 != (int *)0x0) {
        piVar4 = (int *)piVar2[2];
        if (((DAT_012586f1 != '\0') ||
            ((0 < *(int *)(*piVar2 + 0x84) && (*(int *)(*piVar2 + 0x84) == 1)))) &&
           (iVar3 = *(int *)(iVar1 + 0x15c4), iVar6 = *(int *)(iVar1 + 0x15c0),
           iVar7 = FUN_004d5e90(), iVar7 <= iVar3 - iVar6)) {
          FUN_004e9b90();
        }
        cVar5 = FUN_004d1e40();
        piVar2 = piVar4;
        if ((cVar5 != '\0') &&
           (iVar3 = *(int *)(iVar1 + 0x15c4), iVar6 = *(int *)(iVar1 + 0x15c0),
           iVar7 = FUN_004d5d10(), iVar7 <= iVar3 - iVar6)) {
          FUN_004e9b90();
        }
      }
    }
  }
  else {
    piVar2 = *(int **)(iVar1 + 0x149c);
joined_r0x00719313:
    while (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if (*(int *)(iVar1 + 0x80) != 3) goto LAB_0071937d;
      iVar3 = *(int *)(iVar1 + 0x84);
      FUN_00424810(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x104) / 1000 + -1);
      if ((iVar3 < *(int *)(DAT_012588e8 + 0xb0c)) && (0 < *(int *)(iVar1 + 0x10)))
      goto LAB_00719382;
    }
  }
  FUN_007189e0();
  ExceptionList = pvStack_14;
  return;
LAB_0071937d:
  if (*(int *)(iVar1 + 0x80) == 2) {
LAB_00719382:
    FUN_004e9b90();
  }
  goto joined_r0x00719313;
}

