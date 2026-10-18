// FUN_00495920 @ 00495920 body=[[00495920, 0049594c] [00495950, 004959ac]]


/* WARNING: Removing unreachable block (ram,0x00495947) */
/* WARNING: Removing unreachable block (ram,0x00495950) */

void FUN_00495920(void)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int *unaff_EDI;
  undefined4 local_8;
  
  uVar2 = unaff_EDI[1] - *unaff_EDI >> 3;
  if (in_EAX < uVar2) {
    iVar1 = *unaff_EDI + in_EAX * 8;
    if (iVar1 != unaff_EDI[1]) {
      unaff_EDI[1] = iVar1;
      return;
    }
  }
  else if (uVar2 < in_EAX) {
    FUN_00423780();
    FUN_004959e0(local_8);
    unaff_EDI[1] = unaff_EDI[1] + (in_EAX - (unaff_EDI[1] - *unaff_EDI >> 3)) * 8;
  }
  return;
}

