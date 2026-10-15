"""Copy the loadout converter script into the docs site at build time.

The converter used by docs/converter.md is the same script the `tools/` CLI
and tools/web.html use (tools/unitLoadoutToGradLoadout.js). Rather than
checking a second copy of it into docs/, this hook copies it into place
before MkDocs collects files, so tools/unitLoadoutToGradLoadout.js stays the
single source of truth.
"""
import shutil
from pathlib import Path

REPO_ROOT = Path(__file__).resolve().parent.parent
SOURCE = REPO_ROOT / "tools" / "unitLoadoutToGradLoadout.js"
DEST = REPO_ROOT / "docs" / "assets" / "js" / "unitLoadoutToGradLoadout.js"


def on_pre_build(config, **kwargs):
    DEST.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(SOURCE, DEST)
