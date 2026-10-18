// FUN_00abfd5c @ 00abfd5c body=[[00abfd5c, 00abff31]]


bool FUN_00abfd5c(void)

{
  bool bVar1;
  errno_t eVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_EDI;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 local_c;
  long local_8;
  
  local_8 = 0;
  eVar2 = FID_conflict___get_dstbias(&local_8);
  if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  if (local_8 == 0) {
    return false;
  }
  iVar5 = unaff_EDI[5];
  if ((iVar5 != DAT_00ef3180) || (iVar5 != DAT_00ef318c)) {
    if (DAT_00f20944 == 0) {
      uVar4 = 2;
      local_c = 1;
      if (iVar5 < 0x6b) {
        uVar4 = 1;
        local_c = 5;
      }
      FUN_00abfb65(1,1,iVar5,uVar4,0,0,0,0,0);
      FUN_00abfb65(0,1,unaff_EDI[5],local_c,0,0,0,0,0);
    }
    else {
      if (DAT_00f20930 != 0) {
        uVar7 = 0;
        uVar6 = 0;
        uVar8 = DAT_00f20936;
      }
      else {
        uVar7 = DAT_00f20934;
        uVar6 = DAT_00f20936;
        uVar8 = 0;
      }
      FUN_00abfb65(1,DAT_00f20930 == 0,iVar5,uVar6,uVar7,uVar8,DAT_00f2093a,DAT_00f2093c,
                   DAT_00f2093e);
      if (DAT_00f208dc != 0) {
        uVar7 = 0;
        uVar6 = 0;
        iVar5 = unaff_EDI[5];
        uVar8 = DAT_00f208e2;
      }
      else {
        iVar5 = unaff_EDI[5];
        uVar7 = DAT_00f208e0;
        uVar6 = DAT_00f208e2;
        uVar8 = 0;
      }
      FUN_00abfb65(0,DAT_00f208dc == 0,iVar5,uVar6,uVar7,uVar8,DAT_00f208e6,DAT_00f208e8,
                   DAT_00f208ea);
    }
  }
  iVar5 = unaff_EDI[7];
  if (DAT_00ef3184 < DAT_00ef3190) {
    if ((iVar5 < DAT_00ef3184) || (DAT_00ef3190 < iVar5)) {
      return false;
    }
    if ((DAT_00ef3184 < iVar5) && (iVar5 < DAT_00ef3190)) {
      return true;
    }
  }
  else {
    if (iVar5 < DAT_00ef3190) {
      return true;
    }
    if (DAT_00ef3184 < iVar5) {
      return true;
    }
    if ((DAT_00ef3190 < iVar5) && (iVar5 < DAT_00ef3184)) {
      return false;
    }
  }
  iVar3 = ((unaff_EDI[2] * 0x3c + unaff_EDI[1]) * 0x3c + *unaff_EDI) * 1000;
  if (iVar5 == DAT_00ef3184) {
    bVar1 = DAT_00ef3188 <= iVar3;
  }
  else {
    bVar1 = iVar3 < DAT_00ef3194;
  }
  return bVar1;
}

