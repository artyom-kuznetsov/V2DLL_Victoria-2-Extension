// FUN_00954650 @ 00954650 body=[[00954650, 009547dc]]


/* WARNING: Removing unreachable block (ram,0x009547c4) */

void FUN_00954650(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_c;
  
  cVar3 = FUN_00952f10();
  if (cVar3 != '\0') {
    iVar1 = *(int *)(in_EAX + 0x2c);
    iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x554);
    FUN_00952fc0();
    iVar2 = DAT_012586dc;
    if (local_c < 1) {
      *(undefined1 *)(in_EAX + 0x38) = 0;
      iVar2 = *(int *)(iVar2 + 0x30);
      iVar4 = *(int *)(iVar2 + 0x54c);
      if (*(int *)(in_EAX + 0x2c) < 1) {
        iVar7 = -iVar7;
        if (iVar7 < *(int *)(in_EAX + 0x2c)) {
          iVar5 = FUN_00457630();
          iVar6 = FUN_00457630();
          if ((*(int *)(iVar2 + 0x550) / 1000 <= iVar5 - iVar6) &&
             (*(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) - iVar4,
             *(int *)(in_EAX + 0x2c) < iVar7)) {
            *(int *)(in_EAX + 0x2c) = iVar7;
            *(int *)(in_EAX + 0x30) = iVar7 - iVar1;
            return;
          }
        }
      }
      else {
        *(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) - iVar4;
        if (*(int *)(in_EAX + 0x2c) < 1) {
          *(undefined4 *)(in_EAX + 0x2c) = 0;
          *(int *)(in_EAX + 0x30) = *(int *)(in_EAX + 0x2c) - iVar1;
          return;
        }
      }
    }
    else {
      *(undefined1 *)(in_EAX + 0x38) = 1;
      if (*(int *)(in_EAX + 0x2c) < iVar7) {
        iVar2 = *(int *)(DAT_012586dc + 0x30);
        iVar4 = __alldiv((longlong)*(int *)(iVar2 + 0x548) * (longlong)local_c,1000,0);
        if (local_c < *(int *)(iVar2 + 0x558)) {
          if ((*(int *)(in_EAX + 0x2c) < 0) &&
             (*(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) + iVar4, 0 < *(int *)(in_EAX + 0x2c)
             )) {
            *(undefined4 *)(in_EAX + 0x2c) = 0;
            *(int *)(in_EAX + 0x30) = *(int *)(in_EAX + 0x2c) - iVar1;
            return;
          }
        }
        else {
          *(int *)(in_EAX + 0x2c) = *(int *)(in_EAX + 0x2c) + iVar4;
          if (iVar7 < *(int *)(in_EAX + 0x2c)) {
            *(int *)(in_EAX + 0x2c) = iVar7;
            *(int *)(in_EAX + 0x30) = iVar7 - iVar1;
            return;
          }
        }
      }
    }
    *(int *)(in_EAX + 0x30) = *(int *)(in_EAX + 0x2c) - iVar1;
  }
  return;
}

