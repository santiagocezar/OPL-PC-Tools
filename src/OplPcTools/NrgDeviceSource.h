/***********************************************************************************************
 * Copyright © 2017-2021 Sergey Smolyannikov aka brainstream                                   *
 *                                                                                             *
 * This file is part of the OPL PC Tools project, the graphical PC tools for Open PS2 Loader.  *
 *                                                                                             *
 * OPL PC Tools is free software: you can redistribute it and/or modify it under the terms of  *
 * the GNU General Public License as published by the Free Software Foundation,                *
 * either version 3 of the License, or (at your option) any later version.                     *
 *                                                                                             *
 * OPL PC Tools is distributed in the hope that it will be useful,  but WITHOUT ANY WARRANTY;  *
 * without even the implied warranty of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  *
 * See the GNU General Public License for more details.                                        *
 *                                                                                             *
 * You should have received a copy of the GNU General Public License along with MailUnit.      *
 * If not, see <http://www.gnu.org/licenses/>.                                                 *
 *                                                                                             *
 ***********************************************************************************************/

#ifndef __OPLPCTOOLS_NRGDEVICESOURCE__
#define __OPLPCTOOLS_NRGDEVICESOURCE__

#include <OplPcTools/DeviceSource.h>

namespace OplPcTools {

class NrgDeviceSource : public DeviceSource
{
public:
    explicit NrgDeviceSource(const QString & _nrg_filepath);
    ~NrgDeviceSource() override;
    QString filepath() const override;
    bool isReadOnly() const override;
    bool open() override;
    bool isOpen() const override;
    void close() override;
    bool seek(qint64 _offset) override;
    qint64 read(QByteArray & _buffer) override;

private:
    class NrgImage;
    NrgImage * mp_image;
};

} // namespace OplPcTools

#endif // __OPLPCTOOLS_NRGDEVICESOURCE__
