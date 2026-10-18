// __get_lc_time @ 00ac12f5 body=[[00ac12f5, 00ac1af3]]


/* Library Function - Single Match
    __get_lc_time
   
   Library: Visual Studio 2010 Release */

uint __get_lc_time(void)

{
  int in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  void *in_ECX;
  LPCWSTR _LocaleName;
  localeinfo_struct local_10;
  LPCWSTR local_8;
  
  _LocaleName = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x42);
  local_8 = (LPCWSTR)(uint)*(ushort *)(in_EAX + 0x44);
  if (in_ECX == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    local_10.mbcinfo = (pthreadmbcinfo)0x0;
    uVar2 = ___getlocaleinfo(&local_10,1,_LocaleName,0x31,(void *)((int)in_ECX + 4));
    uVar3 = ___getlocaleinfo(&local_10,1,_LocaleName,0x32,(void *)((int)in_ECX + 8));
    uVar4 = ___getlocaleinfo(&local_10,1,_LocaleName,0x33,(void *)((int)in_ECX + 0xc));
    uVar5 = ___getlocaleinfo(&local_10,1,_LocaleName,0x34,(void *)((int)in_ECX + 0x10));
    uVar6 = ___getlocaleinfo(&local_10,1,_LocaleName,0x35,(void *)((int)in_ECX + 0x14));
    uVar7 = ___getlocaleinfo(&local_10,1,_LocaleName,0x36,(void *)((int)in_ECX + 0x18));
    uVar8 = ___getlocaleinfo(&local_10,1,_LocaleName,0x37,in_ECX);
    uVar9 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2a,(void *)((int)in_ECX + 0x20));
    uVar10 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2b,(void *)((int)in_ECX + 0x24));
    uVar11 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2c,(void *)((int)in_ECX + 0x28));
    uVar12 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2d,(void *)((int)in_ECX + 0x2c));
    uVar13 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2e,(void *)((int)in_ECX + 0x30));
    uVar14 = ___getlocaleinfo(&local_10,1,_LocaleName,0x2f,(void *)((int)in_ECX + 0x34));
    uVar15 = ___getlocaleinfo(&local_10,1,_LocaleName,0x30,(void *)((int)in_ECX + 0x1c));
    uVar16 = ___getlocaleinfo(&local_10,1,_LocaleName,0x44,(void *)((int)in_ECX + 0x38));
    uVar17 = ___getlocaleinfo(&local_10,1,_LocaleName,0x45,(void *)((int)in_ECX + 0x3c));
    uVar18 = ___getlocaleinfo(&local_10,1,_LocaleName,0x46,(void *)((int)in_ECX + 0x40));
    uVar19 = ___getlocaleinfo(&local_10,1,_LocaleName,0x47,(void *)((int)in_ECX + 0x44));
    uVar20 = ___getlocaleinfo(&local_10,1,_LocaleName,0x48,(void *)((int)in_ECX + 0x48));
    uVar21 = ___getlocaleinfo(&local_10,1,_LocaleName,0x49,(void *)((int)in_ECX + 0x4c));
    uVar22 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4a,(void *)((int)in_ECX + 0x50));
    uVar23 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4b,(void *)((int)in_ECX + 0x54));
    uVar24 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4c,(void *)((int)in_ECX + 0x58));
    uVar25 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4d,(void *)((int)in_ECX + 0x5c));
    uVar26 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4e,(void *)((int)in_ECX + 0x60));
    uVar27 = ___getlocaleinfo(&local_10,1,_LocaleName,0x4f,(void *)((int)in_ECX + 100));
    uVar28 = ___getlocaleinfo(&local_10,1,_LocaleName,0x38,(void *)((int)in_ECX + 0x68));
    uVar29 = ___getlocaleinfo(&local_10,1,_LocaleName,0x39,(void *)((int)in_ECX + 0x6c));
    uVar30 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3a,(void *)((int)in_ECX + 0x70));
    uVar31 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3b,(void *)((int)in_ECX + 0x74));
    uVar32 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3c,(void *)((int)in_ECX + 0x78));
    uVar33 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3d,(void *)((int)in_ECX + 0x7c));
    uVar34 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3e,(void *)((int)in_ECX + 0x80));
    uVar35 = ___getlocaleinfo(&local_10,1,_LocaleName,0x3f,(void *)((int)in_ECX + 0x84));
    uVar36 = ___getlocaleinfo(&local_10,1,_LocaleName,0x40,(void *)((int)in_ECX + 0x88));
    uVar37 = ___getlocaleinfo(&local_10,1,_LocaleName,0x41,(void *)((int)in_ECX + 0x8c));
    uVar38 = ___getlocaleinfo(&local_10,1,_LocaleName,0x42,(void *)((int)in_ECX + 0x90));
    uVar39 = ___getlocaleinfo(&local_10,1,_LocaleName,0x43,(void *)((int)in_ECX + 0x94));
    uVar40 = ___getlocaleinfo(&local_10,1,_LocaleName,0x28,(void *)((int)in_ECX + 0x98));
    uVar41 = ___getlocaleinfo(&local_10,1,_LocaleName,0x29,(void *)((int)in_ECX + 0x9c));
    uVar42 = ___getlocaleinfo(&local_10,1,local_8,0x1f,(void *)((int)in_ECX + 0xa0));
    uVar43 = ___getlocaleinfo(&local_10,1,local_8,0x20,(void *)((int)in_ECX + 0xa4));
    uVar44 = ___getlocaleinfo(&local_10,1,local_8,0x1003,(void *)((int)in_ECX + 0xa8));
    uVar45 = ___getlocaleinfo(&local_10,0,local_8,0x1009,(void *)((int)in_ECX + 0xb0));
    *(LPCWSTR *)((int)in_ECX + 0xac) = local_8;
    uVar46 = ___getlocaleinfo(&local_10,2,_LocaleName,0x31,(void *)((int)in_ECX + 0xbc));
    uVar47 = ___getlocaleinfo(&local_10,2,_LocaleName,0x32,(void *)((int)in_ECX + 0xc0));
    uVar48 = ___getlocaleinfo(&local_10,2,_LocaleName,0x33,(void *)((int)in_ECX + 0xc4));
    uVar49 = ___getlocaleinfo(&local_10,2,_LocaleName,0x34,(void *)((int)in_ECX + 200));
    uVar50 = ___getlocaleinfo(&local_10,2,_LocaleName,0x35,(void *)((int)in_ECX + 0xcc));
    uVar51 = ___getlocaleinfo(&local_10,2,_LocaleName,0x36,(void *)((int)in_ECX + 0xd0));
    uVar52 = ___getlocaleinfo(&local_10,2,_LocaleName,0x37,(void *)((int)in_ECX + 0xb8));
    uVar53 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2a,(void *)((int)in_ECX + 0xd8));
    uVar54 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2b,(void *)((int)in_ECX + 0xdc));
    uVar55 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2c,(void *)((int)in_ECX + 0xe0));
    uVar56 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2d,(void *)((int)in_ECX + 0xe4));
    uVar57 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2e,(void *)((int)in_ECX + 0xe8));
    uVar58 = ___getlocaleinfo(&local_10,2,_LocaleName,0x2f,(void *)((int)in_ECX + 0xec));
    uVar59 = ___getlocaleinfo(&local_10,2,_LocaleName,0x30,(void *)((int)in_ECX + 0xd4));
    uVar60 = ___getlocaleinfo(&local_10,2,_LocaleName,0x44,(void *)((int)in_ECX + 0xf0));
    uVar61 = ___getlocaleinfo(&local_10,2,_LocaleName,0x45,(void *)((int)in_ECX + 0xf4));
    uVar62 = ___getlocaleinfo(&local_10,2,_LocaleName,0x46,(void *)((int)in_ECX + 0xf8));
    uVar63 = ___getlocaleinfo(&local_10,2,_LocaleName,0x47,(void *)((int)in_ECX + 0xfc));
    uVar64 = ___getlocaleinfo(&local_10,2,_LocaleName,0x48,(void *)((int)in_ECX + 0x100));
    uVar65 = ___getlocaleinfo(&local_10,2,_LocaleName,0x49,(void *)((int)in_ECX + 0x104));
    uVar66 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4a,(void *)((int)in_ECX + 0x108));
    uVar67 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4b,(void *)((int)in_ECX + 0x10c));
    uVar68 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4c,(void *)((int)in_ECX + 0x110));
    uVar69 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4d,(void *)((int)in_ECX + 0x114));
    uVar70 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4e,(void *)((int)in_ECX + 0x118));
    uVar71 = ___getlocaleinfo(&local_10,2,_LocaleName,0x4f,(void *)((int)in_ECX + 0x11c));
    uVar72 = ___getlocaleinfo(&local_10,2,_LocaleName,0x38,(void *)((int)in_ECX + 0x120));
    uVar73 = ___getlocaleinfo(&local_10,2,_LocaleName,0x39,(void *)((int)in_ECX + 0x124));
    uVar74 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3a,(void *)((int)in_ECX + 0x128));
    uVar75 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3b,(void *)((int)in_ECX + 300));
    uVar76 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3c,(void *)((int)in_ECX + 0x130));
    uVar77 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3d,(void *)((int)in_ECX + 0x134));
    uVar78 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3e,(void *)((int)in_ECX + 0x138));
    uVar79 = ___getlocaleinfo(&local_10,2,_LocaleName,0x3f,(void *)((int)in_ECX + 0x13c));
    uVar80 = ___getlocaleinfo(&local_10,2,_LocaleName,0x40,(void *)((int)in_ECX + 0x140));
    uVar81 = ___getlocaleinfo(&local_10,2,_LocaleName,0x41,(void *)((int)in_ECX + 0x144));
    uVar82 = ___getlocaleinfo(&local_10,2,_LocaleName,0x42,(void *)((int)in_ECX + 0x148));
    uVar83 = ___getlocaleinfo(&local_10,2,_LocaleName,0x43,(void *)((int)in_ECX + 0x14c));
    uVar84 = ___getlocaleinfo(&local_10,2,_LocaleName,0x28,(void *)((int)in_ECX + 0x150));
    uVar85 = ___getlocaleinfo(&local_10,2,_LocaleName,0x29,(void *)((int)in_ECX + 0x154));
    uVar86 = ___getlocaleinfo(&local_10,2,local_8,0x1f,(void *)((int)in_ECX + 0x158));
    uVar87 = ___getlocaleinfo(&local_10,2,local_8,0x20,(void *)((int)in_ECX + 0x15c));
    uVar1 = ___getlocaleinfo(&local_10,2,local_8,0x1003,(void *)((int)in_ECX + 0x160));
    uVar1 = uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11
                    | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20
                    | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29
                    | uVar30 | uVar31 | uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38
                    | uVar39 | uVar40 | uVar41 | uVar42 | uVar43 | uVar44 | uVar45 | uVar46 | uVar47
                    | uVar48 | uVar49 | uVar50 | uVar51 | uVar52 | uVar53 | uVar54 | uVar55 | uVar56
                    | uVar57 | uVar58 | uVar59 | uVar60 | uVar61 | uVar62 | uVar63 | uVar64 | uVar65
                    | uVar66 | uVar67 | uVar68 | uVar69 | uVar70 | uVar71 | uVar72 | uVar73 | uVar74
                    | uVar75 | uVar76 | uVar77 | uVar78 | uVar79 | uVar80 | uVar81 | uVar82 | uVar83
                    | uVar84 | uVar85 | uVar86 | uVar87;
  }
  return uVar1;
}

