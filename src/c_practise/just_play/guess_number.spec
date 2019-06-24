# -*- mode: python -*-

block_cipher = None


a = Analysis(['guess_number.py'],
             pathex=['/Users/huangmengyao/Desktop/code'],
             binaries=[],
             datas=[],
             hiddenimports=[],
             hookspath=[],
             runtime_hooks=[],
             excludes=[],
             win_no_prefer_redirects=False,
             win_private_assemblies=False,
             cipher=block_cipher)
pyz = PYZ(a.pure, a.zipped_data,
             cipher=block_cipher)
exe = EXE(pyz,
          a.scripts,
          a.binaries,
          a.zipfiles,
          a.datas,
          name='guess_number',
          debug=False,
          strip=False,
          upx=True,
          runtime_tmpdir=None,
          console=False , icon='icon.jpg')
app = BUNDLE(exe,
             name='guess_number.app',
             icon='icon.jpg',
             bundle_identifier=None)
