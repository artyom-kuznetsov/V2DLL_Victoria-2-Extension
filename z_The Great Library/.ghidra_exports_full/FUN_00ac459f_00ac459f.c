// getTypeEncoding @ 00ac459f body=[[00ac459f, 00ac4a5e]]


/* WARNING: Removing unreachable block (ram,0x00ac49c2) */
/* WARNING: Removing unreachable block (ram,0x00ac4982) */
/* WARNING: Removing unreachable block (ram,0x00ac499a) */
/* WARNING: Removing unreachable block (ram,0x00ac4942) */
/* WARNING: Removing unreachable block (ram,0x00ac49da) */
/* WARNING: Removing unreachable block (ram,0x00ac495a) */
/* WARNING: Removing unreachable block (ram,0x00ac4830) */
/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2010 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  do {
    uVar5 = 0;
    if (*DAT_00f20978 == '_') {
      DAT_00f20978 = DAT_00f20978 + 1;
      uVar5 = 0x4000;
    }
    cVar1 = *DAT_00f20978;
    if (('@' < cVar1) && (cVar1 < '[')) {
      uVar2 = (int)*DAT_00f20978 - 0x41;
      DAT_00f20978 = DAT_00f20978 + 1;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar5 | 0x8000;
      }
      else {
        uVar5 = uVar5 | 0xa000;
      }
      if (0x17 < (int)uVar2) {
        return uVar5;
      }
      if ((uVar5 & 0x8000) == 0) {
        uVar5 = uVar5 & 0xffff9fff;
      }
      else {
        uVar5 = uVar5 | 0x800;
      }
      uVar4 = uVar2 & 0x18;
      if (uVar4 == 0) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 | 0x800;
        }
        else {
          uVar5 = uVar5 | 0x40;
        }
      }
      else if (uVar4 == 8) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar4 != 0x10) {
          return 0xffff;
        }
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xffffe7ff;
        }
      }
      uVar2 = uVar2 & 6;
      if (uVar2 != 0) {
        if (uVar2 == 2) {
          if ((uVar5 & 0x8000) == 0) {
            return uVar5 & 0xffff9fff;
          }
          return uVar5 | 0x200;
        }
        if (uVar2 != 4) {
          if (uVar2 != 6) {
            return 0xffff;
          }
          return uVar5 | 0x400;
        }
        return uVar5 | 0x100;
      }
      return uVar5;
    }
    if (cVar1 != '$') {
      cVar1 = *DAT_00f20978;
      if (('/' < cVar1) && (cVar1 < '9')) {
        DAT_00f20978 = DAT_00f20978 + 1;
        switch(cVar1) {
        case '0':
          return 0x800;
        case '1':
          return 0x1000;
        case '2':
          return 0;
        case '3':
          return 0x4000;
        case '4':
          return 0x2000;
        case '5':
          return 0x6000;
        case '6':
          return 0x6800;
        case '7':
          return 0x7000;
        case '8':
          return 0x7800;
        default:
          return 0xffff;
        }
      }
      if (cVar1 != '9') {
        return (cVar1 != '\0') + 0xfffe;
      }
      DAT_00f20978 = DAT_00f20978 + 1;
      return 0xfffd;
    }
    bVar6 = false;
    pcVar3 = DAT_00f20978 + 1;
    cVar1 = *pcVar3;
    if ('B' < cVar1) {
      if (cVar1 == 'C') {
        uVar5 = 0x7c00;
        goto LAB_00ac48f8;
      }
      if (cVar1 == 'D') {
        uVar5 = uVar5 | 0x9100;
        goto LAB_00ac48f8;
      }
      if (cVar1 == 'E') {
        uVar5 = uVar5 | 0x9200;
        goto LAB_00ac48f8;
      }
      if (cVar1 != 'R') {
        DAT_00f20978 = pcVar3;
        return 0xffff;
      }
      pcVar3 = DAT_00f20978 + 2;
      cVar1 = *pcVar3;
      bVar6 = true;
      if ((cVar1 < '0') || ('5' < cVar1)) {
        DAT_00f20978 = pcVar3;
        return (cVar1 == '\0') + 0xfffe;
      }
LAB_00ac4810:
      if (bVar6) {
        uVar5 = uVar5 | 0x8e00;
      }
      else {
        uVar5 = uVar5 | 0x8d00;
      }
      if (((int)*pcVar3 - 0x30U & 1) != 0) {
        uVar5 = uVar5 | 0x2000;
      }
      uVar2 = (int)*pcVar3 - 0x30U & 6;
      if (uVar2 == 0) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 | 0x800;
        }
        else {
          uVar5 = uVar5 | 0x40;
        }
      }
      else if (uVar2 == 2) {
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xfffff7ff | 0x1000;
        }
        else {
          uVar5 = uVar5 | 0x80;
        }
      }
      else {
        if (uVar2 != 4) {
          DAT_00f20978 = pcVar3;
          return 0xffff;
        }
        if ((uVar5 & 0x8000) == 0) {
          uVar5 = uVar5 & 0xffffe7ff;
        }
      }
      goto LAB_00ac48f8;
    }
    if (cVar1 == 'B') {
      uVar5 = uVar5 | 0x9800;
      goto LAB_00ac48f8;
    }
    if (cVar1 == '\0') {
      uVar5 = 0xfffe;
      pcVar3 = DAT_00f20978;
      goto LAB_00ac48f8;
    }
    if (cVar1 != '$') {
      if (cVar1 < '0') {
        DAT_00f20978 = pcVar3;
        return 0xffff;
      }
      if ('5' < cVar1) {
        if (cVar1 != 'A') {
          DAT_00f20978 = pcVar3;
          return 0xffff;
        }
        uVar5 = uVar5 | 0x9000;
        goto LAB_00ac48f8;
      }
      goto LAB_00ac4810;
    }
    if (DAT_00f20978[2] == 'P') {
      pcVar3 = DAT_00f20978 + 2;
    }
    DAT_00f20978 = pcVar3 + 1;
    cVar1 = *DAT_00f20978;
    if (cVar1 < 'K') {
      if (cVar1 == 'J') {
LAB_00ac4789:
        cVar1 = pcVar3[2];
        if (('/' < cVar1) && (cVar1 < ':')) {
          DAT_00f20978 = pcVar3 + cVar1 + -0x2d;
          uVar5 = getTypeEncoding();
          return uVar5 | 0x10000;
        }
        uVar5 = 0xffff;
        pcVar3 = pcVar3 + 2;
LAB_00ac48f8:
        DAT_00f20978 = pcVar3 + 1;
        return uVar5;
      }
      if (cVar1 == '\0') {
        return 0xfffe;
      }
      if (cVar1 != 'F') {
        bVar6 = cVar1 == 'H';
LAB_00ac4643:
        if (!bVar6) {
          return 0xffff;
        }
      }
    }
    else {
      if (cVar1 < 'L') {
        return 0xffff;
      }
      if ('M' < cVar1) {
        if ('O' < cVar1) {
          bVar6 = cVar1 == 'Q';
          goto LAB_00ac4643;
        }
        goto LAB_00ac4789;
      }
    }
    DAT_00f20978 = pcVar3 + 2;
  } while( true );
}

