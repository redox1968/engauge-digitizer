#ifndef DOCUMENT_MODEL_POINT_MATCH_H
#define DOCUMENT_MODEL_POINT_MATCH_H

#include "ColorPalette.h"
#include "DocumentModelAbstractBase.h"

class CmdMediator;

/// Model for DlgSettingsPointMatch and CmdSettingsPointMatch.
class DocumentModelPointMatch : public DocumentModelAbstractBase
{
public:
  /// Default constructor.
  DocumentModelPointMatch();

  /// Initial constructor from Document.
  DocumentModelPointMatch(const CmdMediator &cmdMediator);

  /// Copy constructor.
  DocumentModelPointMatch(const DocumentModelPointMatch &other);

  /// Assignment constructor.
  DocumentModelPointMatch &operator=(const DocumentModelPointMatch &other);

  /// Get method for max point size.
  double maxPointSize() const;

  /// Get method for accepted color.
  ColorPalette paletteColorAccepted() const;

  /// Get method for candidate color.
  ColorPalette paletteColorCandidate() const;

  /// Get method for rejected color.
  ColorPalette paletteColorRejected() const;

  virtual void saveModel(QXmlStreamWriter &stream) const;

  /// Get method for point separation.
  double pointSeparation() const;

  /// Set method for max point size.
  void setMaxPointSize (double maxPointSize);

  /// Set method for accepted color.
  void setPaletteColorAccepted(ColorPalette paletteColorAccepted);

  /// Set method for candidate color.
  void setPaletteColorCandidate(ColorPalette paletteColorCandidate);

  /// Set method for rejected color.
  void setPaletteColorRejected(ColorPalette paletteColorRejected);

  /// Set method for point separation.
  void setPointSeparation (double pointSeparation);

private:

  double m_pointSeparation;
  double m_maxPointSize;
  ColorPalette m_paletteColorAccepted;
  ColorPalette m_paletteColorCandidate;
  ColorPalette m_paletteColorRejected;
};

#endif // DOCUMENT_MODEL_POINT_MATCH_H